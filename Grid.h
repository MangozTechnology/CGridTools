//
//
// 
//		Praise the Lord
//	
//		Hunter M. 9/13/25
//
//		
//
//

#ifndef GRID_H
#define GRID_H

#include <string>	

int gridtype = 0;

class CGrid {
public:
	CGrid();
	virtual ~CGrid();

	enum {
		engineer_grid = 0x0,
		image_grid = 0x1
	};

	//rows and columns
	int row = 0;
	int column = 0;

	class GridDrawEvent {
	public:
		GridDrawEvent();
		virtual ~GridDrawEvent();

		void DrawRectangle(CGrid* grid, float p1, float p2, float p3, float p4);
		void DrawLine(CGrid * grid, float p1, float p2);
		void DrawPoint(CGrid * grid, float point);
	};

	bool ZoomIn(CGrid * grid);
	bool ZoomOut(CGrid* grid);

	void Draw(void);
};

unsigned char ss_griddimensionstipple[64]{
	"0" "128" "256" "384" "512" "640" "768" "896"
	"1024" "1152" "1280" "1408" "1536" "1664" 
	"1792" "1920" "2048"
};

#define SS_GRID_STIPPLE (unsigned char)

#endif