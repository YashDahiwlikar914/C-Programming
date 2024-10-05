### **1. Introduction to Data Types**
In C, there are three primary data types:
- **char** (character)
- **int** (integer)
- **float** (floating-point number)

C programmers are not limited to these three types because various variations and extended types can be derived from them, such as `unsigned char`, `short int`, and `long int`.

---

### **2. Integers: Long and Short**
- **Integers** in C can be of different sizes depending on whether they are declared as short or long integers.
- A **short int** generally occupies 2 bytes, whereas a **long int** takes up 4 bytes. This varies depending on whether the compiler is 16-bit or 32-bit.
- The range of integers is dependent on the number of bits allocated:
  - In a **16-bit compiler**, the range is between -32,768 to +32,767.
  - In a **32-bit compiler**, the range is between -2,147,483,648 to +2,147,483,647.
  
- **Rules for Integer Sizes**:
  1. Shorts are at least 2 bytes big.
  2. Longs are at least 4 bytes big.
  3. Shorts are never bigger than ints.
  4. Ints are never bigger than longs.

**Example:**
```c
short int height;
long int population;
```

In addition, integers marked as `short` or `long` may be written without explicitly stating the word "int". For example, `long i;` is shorthand for `long int i;`.

---

### **3. Signed and Unsigned Integers**
- **Signed integers** can store both negative and positive values, whereas **unsigned integers** only store positive values.
- By declaring an integer as unsigned, we effectively double the range of positive values it can store. For example, in a 16-bit system:
  - **Signed int**: -32,768 to +32,767.
  - **Unsigned int**: 0 to 65,535.
  
**Example:**
```c
unsigned int students;
```

- There are also **unsigned long** and **unsigned short** variations.

---

### **4. Chars: Signed and Unsigned**
- A **char** is used to store a single character and takes up 1 byte in memory. Each character is internally stored as an integer corresponding to its ASCII value.
- The range of a signed char is from -128 to +127, while for an unsigned char, the range is from 0 to 255.

**Example:**
```c
char ch = 'A';   // Stores ASCII value of 'A' (65).
```

---

### **5. Floats and Doubles**
- A **float** takes up 4 bytes in memory and can store values between -3.4e38 to +3.4e38.
- A **double** occupies 8 bytes and allows a wider range of values: -1.7e308 to +1.7e308.
- **Long doubles** take up 10 bytes and can store values between -1.7e4932 to +1.7e4932.

**Example:**
```c
double salary;
long double large_value;
```

---

### **6. Format Specifiers**
Each data type has specific format specifiers used with `scanf()` and `printf()` functions to handle input/output.

- **char**: `%c`
- **unsigned char**: `%c`
- **short signed int**: `%d`
- **short unsigned int**: `%u`
- **signed int**: `%d`
- **unsigned int**: `%u`
- **long signed int**: `%ld`
- **long unsigned int**: `%lu`
- **float**: `%f`
- **double**: `%lf`
- **long double**: `%Lf`

---

### **7. Issues in Data Types**
- **Compiler Dependency**: The size and range of an integer or float depend on the compiler and operating system. Some processors offer better floating-point accuracy due to hardware support for floating-point calculations.
  
- **Binary Storage of Characters**: A **char** in C is stored as its binary equivalent. When storing a number exceeding the range of a char, it results in unexpected behavior due to **two's complement** representation.

**Example:**
```c
char ch = 291; // Will cause a wrap-around due to overflow.
```

---

### **8. Storage Classes**
In C, every variable not only has a type but also a **storage class** that defines its lifetime, scope, and initial value.

#### **Automatic Storage Class**
- **Scope**: Local to the block where it is defined.
- **Lifetime**: Exists till the control stays within the block.
  
#### **Register Storage Class**
- **Storage**: CPU registers (if available).
- **Scope**: Local to the block.
  
#### **Static Storage Class**
- **Scope**: Local but its value persists across function calls.
  
#### **Extern Storage Class**
- **Scope**: Available globally across multiple files.

---

### **9. Example Program Using Various Data Types**
Here is an example program that demonstrates different data types and how to use format specifiers:

```c
main()
{
    char c;
    unsigned char d;
    int i;
    unsigned int j;
    short int k;
    unsigned short int l;
    long int m;
    unsigned long int n;
    float x;
    double y;
    long double z;

    // Input and Output for char
    scanf("%c %c", &c, &d);
    printf("%c %c", c, d);

    // Input and Output for int
    scanf("%d %u", &i, &j);
    printf("%d %u", i, j);

    // Input and Output for short int
    scanf("%d %u", &k, &l);
    printf("%d %u", k, l);

    // Input and Output for long int
    scanf("%ld %lu", &m, &n);
    printf("%ld %lu", m, n);

    // Input and Output for float, double, long double
    scanf("%f %lf %Lf", &x, &y, &z);
    printf("%f %lf %Lf", x, y, z);
}
```

---

### **Summary**
- **Integers**: Can be signed or unsigned and come in different sizes (short, long).
- **Chars**: Signed and unsigned, stores ASCII values.
- **Floats and Doubles**: For real numbers, with larger ranges available through double and long double types.
- **Storage Classes**: Manage scope, lifetime, and initial value of variables in C.