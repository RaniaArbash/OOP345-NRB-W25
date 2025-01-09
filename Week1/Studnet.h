
#ifndef SDDS_H_Student
#define  SDDS_H_Student
namespace SDDS {
	class Student {
		int m_id;
		int m_yob;
	public:
		static int numOfStudent;
		const int add10(const int v) const;

		Student(int a = 0, int b = 2000) {
			m_id = a;
			m_yob = b;
		}
	};
	int Student::numOfStudent = 100;
}

#endif