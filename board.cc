class Posn{
	int x,y;
}

class Piece {
	int type;
	int team;
	Posn posn;
  public:
	Piece(int type, int team, int x, int y): type{type}, team{team}, x{x}, y{y} {}
	int get_type() const {return type;}
	int get_team() const {return team;}
	Posn get_posn() const {return posn;}
	void update_posn(int x, int y) {posn.x = x; posn.y = y;}
}



class Board {
	vector<vector<shared_ptr<Piece>>> grid;
  public:
	//Add ability to change later
	static const int board_x = 8;
	static const int board_y = 8;
	Board() {
		for (int i = 0; i < board_x; i++) {
			vector<shared_ptr<Piece>> tmp;
			for (int i2 = 0; i2 < board_y; i2++) {
				tmp.emplace_back(nullptr);
			}
			grid.emplace_back(tmp);
		}
	}
	
	void place_piece(int type, int team, int x, int y) {
		grid[x][y] = new Piece(type, team, x, y);
	}
	
	shared_ptr<Piece> get_piece(int x, int y) const {
		return grid[x][y];
	}
	
	vector<vector<shared_ptr<Piecee>>> get_grid() const {
		return grid;
	}
}