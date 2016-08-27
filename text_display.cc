#include <iostream>

class Text_Display: public Display {
  public:
	void display_Board(const Board & board) const override {
		for (int y = board.board_y - 1; i >= 0; i++) {
			for (int x = 0; i2 < board.board_x; i2++) {
				shared_ptr<Piece> tmp = board.get_piece(x, y);
				if (tmp == nullptr) {
					//Even rows (starting from 0) have even black squares (also from 0)
					//Odd rows have odd black squares
					int even_odd = y % 2;
					if (x % 2 == even_odd) {
						std::cout << "#";
					} else {
						std::cout << "_";
					}
				} else {
					if (tmp->get_team() == 1) {
						if (tmp->get_type() == 1) std::cout << "p";
						else if (tmp->get_type() == 2) std::cout << "r";
						else if (tmp->get_type() == 3) std::cout << "n";
						else if (tmp->get_type() == 4) std::cout << "b";
						else if (tmp->get_type() == 5) std::cout << "q";
						else if (tmp->get_type() == 6) std::cout << "k";
					} else if (tmp->get_team() == 2) {
						if (tmp->get_type() == 1) std::cout << "P";
						else if (tmp->get_type() == 2) std::cout << "R";
						else if (tmp->get_type() == 3) std::cout << "N";
						else if (tmp->get_type() == 4) std::cout << "B";
						else if (tmp->get_type() == 5) std::cout << "Q";
						else if (tmp->get_type() == 6) std::cout << "K";
					} // add more if we do 4 team mode
				}
			}
		}
	}
}