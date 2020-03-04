#include "Zdraw.hpp"
#include "Vec3.hpp"

int main()
{
	Zdraw sc;
	sc.init("ZRAY", WIDTH, HEIGHT);

	while (true) {
		sc.pollevent();

		for (int j = HEIGHT - 1; j >= 0; j--) {
			for (int i = 0; i < WIDTH; i++) {

				Vec3 col(float(i) / float(WIDTH), float(j) / float(HEIGHT), 0.2f);

				uint8_t ir = uint8_t(255.99 * col[0]);
				uint8_t ig = uint8_t(255.99 * col[1]);
				uint8_t ib = uint8_t(255.99 * col[2]);

				sc.putpixel(i, j, ((ir << 24) + (ig << 16) + (ib << 8) + 0xff));

			}
		}
		sc.update();
	}



}