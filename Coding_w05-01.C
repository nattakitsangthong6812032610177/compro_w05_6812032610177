#include <stdio.h>

int main() {
    // ประกาศตัวแปร name เป็นตัวหนังสือภาษาอังกฤษตัวแรกของชื่อเล่น (ตัวพิมพ์ใหญ่)
    char name = 'N';

    // ประกาศตัวแปร age เป็นอายุของตัวเอง (เลขจำนวนเต็ม)
    int age = 18;

    // ประกาศตัวแปร weight เป็นน้ำหนักของตัวเอง (เลขทศนิยม)
    float weight = 89.5;

    // แสดงผลบรรทัดที่ 1: ชื่อ อายุ
    printf("Student %c is %d years old.\n", name, age);

    // แสดงผลบรรทัดที่ 2: น้ำหนัก
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}
