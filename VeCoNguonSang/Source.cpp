#include "glut.h"
#include <math.h>
#include <thread>
#include <chrono>

void DrawCoordinate()
{
	glDisable(GL_LIGHTING);

	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(10, 0, 0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 1, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 10, 0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0, 10);
	glEnd();

	glEnable(GL_LIGHTING);
}

void DrawTable()
{
	// Set the color of the table to brown.
	GLfloat color_brown[] = { 0.6f, 0.4f, 0.2f, 1.0f };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, color_brown);

	// Draw the tabletop of the table.
	glPushMatrix();
	glTranslatef(0.3f, -0.3f, 0.4f);
	glScalef(2.0f, 0.1f, 1.0f);
	glutSolidCube(1.0f);
	glPopMatrix();

	// Draw the four legs of the table.
	glPushMatrix();
	glTranslatef(-0.8f, -1.5f, -0.8f);
	glScalef(0.1f, 2.0f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.8f, -1.5f, -0.8f);
	glScalef(0.1f, 2.0f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8f, -1.5f, 0.4f);
	glScalef(0.1f, 2.0f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.8f, -1.5f, 0.4f);
	glScalef(0.1f, 2.0f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();
}


void DrawChair()
{
	// Set the color of the chair to brown.
	GLfloat color_brown[] = { 0.6f, 0.4f, 0.2f, 1.0f };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, color_brown);

	// Draw the seat of the chair.
	glPushMatrix();
	glTranslatef(1.9f, -1.5f, 0.5f);
	glScalef(1.0f, 0.1f, 1.0f);
	glutSolidCube(1.0f);
	glPopMatrix();

	// Draw the backrest of the chair.
	glPushMatrix();
	glTranslatef(1.9f, -1.1f, 1.0f);
	glScalef(1.0f, 1.0f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();

	// Draw the four legs of the chair.
	glPushMatrix();
	glTranslatef(1.0f, -2.5f, -0.4f);
	glScalef(0.1f, 1.4f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.9f, -2.5f, -0.4f);
	glScalef(0.1f, 1.4f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.9f, -2.5f, 0.4f);
	glScalef(0.1f, 1.4f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0f, -2.5f, 0.4f);
	glScalef(0.1f, 1.4f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();
}


void DrawComputer()
{

	GLfloat color_red[] = { 1.0, 0.0, 0.0, 1.0 };
	GLfloat color_gray[] = { 0.5, 0.5, 0.5, 1.0 };
	GLfloat color_blue[] = { 0.0, 0.0, 1.0, 1.0 };
	GLfloat color_silver[] = { 0.75f, 0.75f, 0.75f, 0.5f };

	// Draw the computer case.
	//glColor3f(0.5f, 0.5f, 0.5f);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, color_gray);
	glPushMatrix();
	glTranslatef(0.8f, 0.2f, 0.5f);
	glScalef(0.4f, 0.8f, 0.8f);
	glutSolidCube(1.0f);
	glPopMatrix();

	// Draw the monitor on top of the computer case.
	//glColor3f(0.0f, 0.749f, 1.0f); // Set the color of the monitor to dark gray.
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, color_blue);
	glPushMatrix();
	glTranslatef(1.6f, 0.4f, 0.2f);
	glScalef(0.8f, 0.6f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();

	// Draw monitor stand
	//glColor3f(1.0f, 0.0f, 0.0f);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, color_gray);
	glPushMatrix();
	glTranslatef(1.6f, 0.0f, 0.2f);
	glScalef(0.1f, 0.3f, 0.1f);
	glutSolidCube(1.0f);
	glPopMatrix();

	// Draw monitor stand
	//glColor3f(1.0f, 0.0f, 0.0f);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, color_gray);
	glPushMatrix();
	glTranslatef(1.5f, -0.2f, 0.2f);
	glScalef(0.6f, 0.0f, 0.4f);
	glutSolidCube(1.0f);
	glPopMatrix();

	// Draw the keyboard in front of the computer case.
	//glColor3f(1.0f, 0.0f, 0.0f);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, color_silver);
	glPushMatrix();
	glTranslatef(2.2f, 0.0f, 1.4f);
	glRotatef(1.0f, 1.0f, 0.0f, 0.0f);
	glScalef(0.8f, 0.05f, 0.3f);
	glutSolidCube(1.0f);
	glPopMatrix();
}

void DrawWindow()
{
	GLfloat light_position[] = { 0.0, 10.0, 0.0, 1.0 }; // Vị trí nguồn sáng
	GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 }; // Màu sắc ánh sáng

	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);

	// Set the color of the window frame
	GLfloat color_frame[] = { 0.4f, 0.4f, 0.4f, 1.0f }; // Gray color
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, color_frame);

	// Draw the window frame
	glPushMatrix();
	glTranslatef(-3.0f, 2.0f, 0.0f); // Set the position of the window
	glRotatef(90.0, -3.0, 30.0, 0.0);
	glScalef(2.5f, 3.0f, 0.05f);    // Set the size of the window
	glutSolidCube(1.0f);             // Draw the window frame as a cube
	glPopMatrix();

	// Set the color of the glass
	GLfloat color_glass[] = { 0.8f, 0.8f, 1.0f, 0.5f }; // Light blue color with transparency
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, color_glass);

	// Draw the glass pane
	glPushMatrix();
	glTranslatef(-3.0f, 2.0f, 0.025f); // Set the position slightly in front of the frame
	glRotatef(90.0, -3.0, 30.0, 0.0);
	glScalef(0.95f, 0.95f, 0.045f);   // Set the size slightly smaller than the frame
	glutSolidCube(1.0f);               // Draw the glass pane as a cube
	glPopMatrix();

	//window frame
	glPushMatrix();
	glTranslatef(-2.5f, 1.9f, -0.3f);
	glRotatef(90.0, -3.0, 30.0, 0.0);
	glScalef(0.07f, 2.9f, 0.0f);   
	glutSolidCube(1.0f);               
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.5f, 1.95f, 0.3f);
	glRotatef(90.0, -3.0, 30.0, 0.0);
	glScalef(0.065f, 2.9f, 0.0f);
	glutSolidCube(1.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.5f, 2.0f, 1.0f);
	glRotatef(90.0, -3.0, 30.0, 0.0);
	glScalef(0.06f, 2.9f, 0.0f);
	glutSolidCube(1.0f);
	glPopMatrix();

	//Rotate the window frame
	glPushMatrix();
	glTranslatef(-3.0f, 2.7f, -0.05f);
	glRotatef(90.0, -3.0, 30.0, 0.0);
	glScalef(2.6f, 0.07f, 0.0f);
	glutSolidCube(1.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.5f, 1.9f, 0.3f);
	glRotatef(90.0, -3.0, 30.0, 0.0);
	glScalef(2.45f, 0.06f, 0.0f);
	glutSolidCube(1.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.5f, 1.2f, 0.3f);
	glRotatef(90.0, -3.0, 30.0, 0.0);
	glScalef(2.4f, 0.06f, 0.0f);
	glutSolidCube(1.0f);
	glPopMatrix();
}

void DrawWallClock()
{
	GLfloat clock_frame_color[] = { 0.2f, 0.2f, 0.2f, 1.0f }; // Dark gray color
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, clock_frame_color);

	// Draw the clock frame
	glPushMatrix();
	glTranslatef(2.0f, 2.0f, 0.0f); // Set the position of the clock
	glRotatef(-90.0, 0.0, 0.0, 1.0); // Rotate the clock frame to be vertical
	glutSolidTorus(0.05, 1.0, 20, 20); // Draw the clock frame as a torus
	glPopMatrix();

	// Set the color of the clock face
	GLfloat clock_face_color[] = { 1.0f, 1.0f, 1.0f, 1.0f }; // White color
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, clock_face_color);

	// Draw the clock face
	glPushMatrix();
	glTranslatef(2.0f, 2.0f, 0.0f); // Set the position of the clock
	glRotatef(-90.0, 0.0, 0.0, 1.0); // Rotate the clock face to be vertical
	glutSolidTorus(0.03, 0.9, 20, 20); // Draw the clock face as a torus
	glPopMatrix();

	for(int minute = 1; minute <= 2; minute++)
	{
		if (minute == 61)
		{
			minute = 0;
		}
		for (int second = 1; second <= 3; second++) {
			// Set the color of the clock frame
			

			// Set the color of the clock hands
			GLfloat clock_hands_color[] = { 0.0f, 0.0f, 0.0f, 1.0f }; // Black color
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, clock_hands_color);

			// Draw the minute hand
			glPushMatrix();
			glTranslatef(2.0f, 2.0f, 0.0f); // Set the position of the clock
			glRotatef(-90.0, 0.0, 0.0, 1.0); // Rotate the clock hands to be vertical
			glRotatef(6.0 * minute, 0.0, 0.0, 1.0); // Rotate the minute hand based on current minute
			glTranslatef(0.0f, 0.8f, 0.0f); // Move the minute hand to the correct length
			glScalef(0.02f, 0.8f, 0.02f); // Set the size of the minute hand
			glutSolidCube(1.0f); // Draw the minute hand as a cube
			glPopMatrix();

			// Draw the second hand
			glPushMatrix();
			glTranslatef(2.0f, 2.0f, 0.0f); // Set the position of the clock
			glRotatef(-90.0, 0.0, 0.0, 1.0); // Rotate the clock hands to be vertical
			glRotatef(6.0 * second, 0.0, 0.0, 1.0); // Rotate the second hand based on current second
			glTranslatef(0.0f, 0.8f, 0.0f); // Move the second hand to the correct length
			glScalef(0.01f, 0.8f, 0.01f); // Set the size of the second hand
			glutSolidCube(1.0f); // Draw the second hand as a cube
			glPopMatrix();
			
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
		minute++;
	}
}


void DrawDeskLamp()
{

	GLfloat light_position[] = { 0.0, -10.0, 0.0, 1.0 }; // Vị trí nguồn sáng
	GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 }; // Màu sắc ánh sáng

	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);

	// Set material properties for the lamp stand
	//GLfloat lamp_stand_color[] = { 0.5f, 0.5f, 0.5f, 1.0f }; // Gray color
	//glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, lamp_stand_color);

	//// Draw the lamp stand
	//glPushMatrix();
	//glTranslatef(0.0f, 2.0f, 0.0f); 
	//glRotatef(180.0f, 1.0f, 0.0f, 0.0f); 
	//glScalef(0.1f, 1.0f, 0.1f);    
	//glutSolidCube(1.0f);             
	//glPopMatrix();

	// Set material properties for the lamp shade
	GLfloat lamp_shade_color[] = { 0.8f, 0.8f, 0.8f, 1.0f }; // Light gray color
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, lamp_shade_color);

	// Draw the lamp shade
	glPushMatrix();
	glTranslatef(0.0f, 3.8f, 0.0f); ; 
	glScalef(0.6f, 0.1f, 0.6f);     
	glutSolidSphere(1.0f, 20, 20);   
	glPopMatrix();

	// Set material properties for the lamp bulb
	//GLfloat lamp_bulb_color[] = { 1.0f, 1.0f, 0.0f, 1.0f }; // Yellow color
	//glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, lamp_bulb_color);

	//// Draw the lamp bulb
	//glPushMatrix();
	//glTranslatef(0.0f, 0.8f, 0.0f); 
	//glRotatef(180.0f, 1.0f, 0.0f, 0.0f); 
	//glutSolidSphere(0.05f, 20, 20);  
	//glPopMatrix();
}



void DrawRoom() {
	// Vật liệu cho các mặt phẳng
	GLfloat left_right_wall_diffuse[] = { 0.5, 0.35, 0.05, 1.0 }; // Màu sắc khối lượng tán phản xạ cho tường bên trái và bên phải
	GLfloat back_wall_diffuse[] = { 0.8, 0.8, 0.8, 1.0 }; // Màu sắc khối lượng tán phản xạ cho tường sau
	GLfloat floor_diffuse[] = { 0.8, 0.8, 0.8, 1.0 }; // Màu sắc khối lượng tán phản xạ cho sàn 
	GLfloat mau_kem[] = { 0.94, 0.81, 0.71, 1.0 }; // Màu kem
	GLfloat ceiling_diffuse[] = { 0.8, 0.8, 0.8, 1.0 }; // Màu sắc khối lượng tán phản xạ cho trần

	//// Vật liệu và vị trí ánh sáng
	//GLfloat light_position[] = { 0.0, 10.0, 0.0, 1.0 }; // Vị trí nguồn sáng
	//GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 }; // Màu sắc ánh sáng

	//// Thiết lập ánh sáng
	//glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	//glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);

	GLfloat light_position1[] = { 0.0, -10.0, 0.0, 1.0 }; // Vị trí nguồn sáng
	GLfloat light_diffuse1[] = { 1.0, 1.0, 1.0, 1.0 }; // Màu sắc ánh sáng

	// Thiết lập ánh sáng
	glLightfv(GL_LIGHT1, GL_POSITION, light_position1);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse1);

	// Vẽ các mặt phẳng để tạo thành tường, sàn và trần
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, left_right_wall_diffuse); // Sử dụng vật liệu cho các tường bên trái và bên phải
	glBegin(GL_QUADS);
	// Tường bên trái
	glVertex3f(-5, -5, -5);
	glVertex3f(-5, -5, 5);
	glVertex3f(-5, 5, 5);
	glVertex3f(-5, 5, -5);
	// Tường bên phải
	glVertex3f(5, -5, -5);
	glVertex3f(5, -5, 5);
	glVertex3f(5, 5, 5);
	glVertex3f(5, 5, -5);
	glEnd();

	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mau_kem); // Sử dụng vật liệu cho tường sau
	glBegin(GL_QUADS);
	// Tường sau
	glVertex3f(-5, -5, -5);
	glVertex3f(5, -5, -5);
	glVertex3f(5, 5, -5);
	glVertex3f(-5, 5, -5);
	glEnd();

	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, floor_diffuse);
	glBegin(GL_QUADS);
	// Sàn
	glVertex3f(-5, -5, -5);
	glVertex3f(5, -5, -5);
	glVertex3f(5, -5, 5);
	glVertex3f(-5, -5, 5);
	glEnd();

	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, ceiling_diffuse);
	glBegin(GL_QUADS);
	// Trần
	glVertex3f(-5, 5, -5);
	glVertex3f(5, 5, -5);
	glVertex3f(5, 5, 5);
	glVertex3f(-5, 5, 5);
	glEnd();
}

void DrawSpotLight()
{
	glDisable(GL_LIGHTING);
	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0, 3, 0);	
	glutSolidSphere(0.1, 20, 20);
	glPopMatrix();
	glEnable(GL_LIGHTING);
}

void Display()
{
	#pragma region Tea
	//glClearColor(0, 0, 0, 0);
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glEnable(GL_DEPTH_TEST);

	//glEnable(GL_LIGHTING);
	//glEnable(GL_LIGHT1);
	//glEnable(GL_LIGHT0);
	//// Nguồn sáng
	//GLfloat light_pos0[] = { 5, 0, 5, 0 }; // Nguồn sáng 0
	//GLfloat embient0[] = { 0.8, 0.2, 0.2, 0 }; // màu môi trường 0
	//GLfloat diffuse0[] = { 0.8, 0.1, 0.2, 1 }; // màu khuyêch tán 0
	//GLfloat specular0[] = { 0.8, 0.2, 0.2, 1 }; // màu phản xạ 0

	//glLightfv(GL_LIGHT0, GL_POSITION, light_pos0);
	//glLightfv(GL_LIGHT0, GL_AMBIENT, embient0);
	//glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse0);
	//glLightfv(GL_LIGHT0, GL_SPECULAR, specular0);

	//// Nguồn sáng 1
	//float light_pos1[] = { 0, 1, 0, 1 }; // Nguồn sáng 1
	//glLightfv(GL_LIGHT1, GL_POSITION, light_pos1);
	//GLfloat embient1[] = { 1, 1, 1, 1 }; // màu môi trường 1
	//GLfloat diffuse1[] = { 1, 1, 1, 1 }; // màu khuyêch tán 1
	//GLfloat specular1[] = { 1, 1, 1, 1 }; // màu phản xạ 1
	//glLightfv(GL_LIGHT1, GL_AMBIENT, embient1);
	//glLightfv(GL_LIGHT1, GL_DIFFUSE, diffuse1);
	//glLightfv(GL_LIGHT1, GL_SPECULAR, specular1);

	////GL_SPOT_EXPONENT: độ tỏa rộng của vùng ánh sáng mờ hay độ tập trung của chùm sáng
	//// - Giá trị càng cao thì vùng sáng càng sắc nét (Chùm sáng tập trung vào 1 vùng diện tích nhỏ)
	//// - Giá trị càng thấp thì vùng sáng càng mờ (Chùm sáng tập trung vào 1 vùng diện tích lớn)
	//GLfloat spot_exponent = 10;
	//glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, spot_exponent);

	////GL_SPOT_CUTOFF: góc chiếu giới hạn
	//// - Giá trị càng nhỏ thì góc chiếu càng hẹp
	//// - Giá trị càng lớn thì góc chiếu càng rộng
	//GLfloat spot_cutoff = 60;
	//glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, spot_cutoff);
	//
	////GL_SPOT_DIRECTION: hướng chiếu sáng của nguồn sáng Spotlight
	//GLfloat spot_dir[3] = { 0.5, -1, 0.5 };
	//glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, spot_dir);

	//// Vẽ các đối tượng 
	//DrawCoordinate();
	//glColor3f(1, 1, 1);
	//glutSolidTeapot(1);
	//glPushMatrix();
	//glTranslatef(0, -1.8, 0);
	//glutSolidCube(3);
	//glPopMatrix();	
	//DrawSpotLight();
	//glFlush();
	#pragma endregion

	// Vẽ phòng

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	glPushMatrix();
	DrawRoom(); // Vẽ căn phòng
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.0f, 0.0f, 0.0f);
	DrawChair();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0f, 0.0f, 0.0f);
	DrawTable();
	glPopMatrix();
	
	//Computer
	glPushMatrix();
	DrawComputer();
	glPopMatrix();

	//window
	glPushMatrix();
	DrawWindow();
	glPopMatrix();

	//Desk lamp
	glPushMatrix();
	DrawDeskLamp();
	glPopMatrix();

	//Wall clock
	glPushMatrix();
	DrawWallClock();
	glPopMatrix();



	glFlush();
}

void Init()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, 1, 1, 100);
	// Sử dụng 1 trong 2 góc nhìn dưới đây để thấy ánh sáng của spot chiếu như thế nào
	//gluLookAt(-1, 2, 1, 0, 0, 0, 0, 1, 0);  // Góc nhìn chéo từ trên xuống
	gluLookAt(5, 1, 5, 0, 0, 0, 0, 1, 0);  // Góc nhìn thẳng
	//gluLookAt(0, 10, 0, 0, 0, 0, 0, 0, -1); // Góc nhìn từ trên xuống dưới
	//gluLookAt(0.0f, 0.0f, 5.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
	glMatrixMode(GL_MODELVIEW);
}

int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600,600);
	glutCreateWindow("Spot Light");
	Init();
	glutDisplayFunc(Display);
	glutMainLoop();
	return 0;
}
