// تعريف متغيرين من نوع Boolean لتحديد الاتجاه لاحقاً
bool x = true;
bool R = true;

// تعريف دبابيس الموتور الأيمن والأيسر
#define PMR1 5  // PinMotorRight1 – يتحكم في اتجاه دوران الموتور الأيمن (جهة أولى)
#define PMR2 3  // PinMotorRight2 – يتحكم في الاتجاه الثاني للموتور الأيمن
#define PML1 9  // PinMotorLeft1 – يتحكم في اتجاه دوران الموتور الأيسر (جهة أولى)
#define PML2 6  // PinMotorLeft2 – يتحكم في الاتجاه الثاني للموتور الأيسر

// تعريف دبابيس الحساسات (الأشعة تحت الحمراء IR)
#define PIR 10   // Pin IR Right – الحساس الأيمن
#define PIF 4    // Pin IR Front – الحساس الأمامي
#define PIL 2    // Pin IR Left – الحساس الأيسر
#define PIRR 8   // Pin IR Rear Right – حساس مساعد يمين خلفي
#define PILL A1  // Pin IR Rear Left – حساس مساعد يسار خلفي (تناظري)

// تعريف دبابيس الحساسات الضوئية (Light sensors)
#define PLR 11  // Pin Light Right – حساس الضوء الأيمن
#define PLL 7   // Pin Light Left – حساس الضوء الأيسر

void setup() {
  Serial.begin(9600); // بدء الاتصال التسلسلي بسرعة 9600 لتتبع القيم
  // إعداد دبابيس المحركات كمخرجات
  pinMode(PMR1, OUTPUT);
  pinMode(PMR2, OUTPUT);
  pinMode(PML1, OUTPUT);
  pinMode(PML2, OUTPUT);

  // إعداد دبابيس الحساسات كمدخلات
  pinMode(PIR, INPUT);
  pinMode(PIF, INPUT);
  pinMode(PIL, INPUT);
  pinMode(PIRR, INPUT);
  pinMode(PILL, INPUT);
  pinMode(PLR, INPUT);
  pinMode(PLL, INPUT);

  delay(5000); // تأخير 5 ثوانٍ قبل بدء البرنامج الرئيسي (يمكن استخدامها لتهيئة الروبوت)
}

// تعريف متغيرات لقراءة قيم الحساسات
int IR = 0;
int IL = 0;
int IRR = 0;
int ILL = 0;
int IF = 0;

int LR = 0;
int LL = 0;

void loop() {
  // قراءة قيم الحساسات
  IR = digitalRead(PIR);    // قراءة الحساس الأيمن
  IL = digitalRead(PIL);    // قراءة الحساس الأيسر
  IRR = digitalRead(PIRR);  // قراءة الحساس الخلفي الأيمن
  ILL = digitalRead(PILL);  // قراءة الحساس الخلفي الأيسر
  IF = digitalRead(PIF);    // قراءة الحساس الأمامي

  LR = digitalRead(PLR);    // قراءة حساس الضوء الأيمن
  LL = digitalRead(PLL);    // قراءة حساس الضوء الأيسر

  // في حال اكتشاف ضوء قوي (أحد الحساسات الضوئية LOW)
  if (LR == LOW || LL == LOW) {
    Backward(255);   // التراجع للخلف بسرعة كاملة
    delay(500);      // الانتظار نصف ثانية
  }

  // إذا لم يكن هناك شيء أمام الروبوت
  else if (IF == LOW) {
    Forward(255);    // التحرك للأمام بسرعة كاملة
  }

  // إذا كان هناك شيء على اليمين
  else if (IR == LOW) {
    Right(255);      // التوجه نحو اليمين
    R = true;        // تحديث الاتجاه لليمين
  }

  // إذا كان هناك شيء على اليسار
  else if (IL == LOW) {
    Left(255);       // التوجه نحو اليسار
    R = false;       // تحديث الاتجاه لليسار
  }

  // إذا الحساس الخلفي الأيمن اكتشف عائق
  else if (IRR == LOW) {
    Right(255);      // التفاف لليمين
    R = true;        // حفظ الاتجاه
  }

  // إذا الحساس الخلفي الأيسر اكتشف عائق
  else if (ILL == LOW) {
    Left(255);       // التفاف لليسار
    R = false;       // حفظ الاتجاه
  }

  // في حال عدم اكتشاف أي شيء بالحساسات
  else {
    if (R == true) {
      Right(180);    // التفاف بسيط لليمين بسرعة أقل
    }
    else if (R == false) {
      Left(180);     // التفاف بسيط لليسار بسرعة أقل
    }
  }
}

// دالة الحركة للأمام
void Forward(int spd) {
  analogWrite(PMR1, spd); // تشغيل جهة واحدة من الموتور الأيمن
  analogWrite(PMR2, 0);   // إيقاف الجهة الثانية
  analogWrite(PML1, spd); // تشغيل جهة واحدة من الموتور الأيسر
  analogWrite(PML2, 0);   // إيقاف الجهة الثانية
}

// دالة التراجع للخلف
void Backward(int spd) {
  analogWrite(PMR1, 0);
  analogWrite(PMR2, spd);
  analogWrite(PML1, 0);
  analogWrite(PML2, spd);
}

// دالة الالتفاف لليمين
void Right(int spd) {
  analogWrite(PMR1, 0);
  analogWrite(PMR2, spd);   // تشغيل الجهة العكسية للموتور الأيمن
  analogWrite(PML1, spd);
  analogWrite(PML2, 0);
}

// دالة الالتفاف لليسار
void Left(int spd) {
  analogWrite(PMR1, spd);
  analogWrite(PMR2, 0);
  analogWrite(PML1, 0);
  analogWrite(PML2, spd);   // تشغيل الجهة العكسية للموتور الأيسر
}

// التفاف لليمين باستخدام عجلة واحدة فقط (اليسرى)
void RightOneWheel(int spd) {
  analogWrite(PMR1, 0);
  analogWrite(PMR2, 0);
  analogWrite(PML1, spd);
  analogWrite(PML2, 0);
}

// التفاف لليسار باستخدام عجلة واحدة فقط (اليمنى)
void LeftOneWheel(int spd) {
  analogWrite(PMR1, spd);
  analogWrite(PMR2, 0);
  analogWrite(PML1, 0);
  analogWrite(PML2, 0);
}
