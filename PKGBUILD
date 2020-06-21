# Maintainer: Quaqqer <quaqqer@gmail.com>
pkgname=st-quaqqer
pkgver=0.8.4
pkgrel=3
arch=(x86_64)
pkgdesc="Quaqqer's build of ST"
conflicts=('st')

build() {
	cd ..
	make
}

package() {
	cd ..
	make PREFIX=/usr DESTDIR="$pkgdir/" install
	install -Dm644 LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
}
