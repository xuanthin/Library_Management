void RunThongTin(){
	btnQuayVe.draw();
	
	// ve giao dien
	setcolor(YELLOW);	// chon mau chu
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);		// chon font chu, huong ve chu (direction), size chu
	
	char *uni = "Cong Nghe thong tin va truyen thong Viet - Han";
	char *nam = "-- 2020 - 2025 --";
	char *title = "* Mon hoc : ";
	char *title2 = "Lap trinh C/C++";
	char *doan = "* Do An : ";
	char *doan2 = "Quan Ly Thu Vien";
	char *sv = "* Sinh vien :";
	char *author = " Dinh Xuan Thin - 20IT350 - 20SE4";

	
	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
	outtextxy(w/2-textwidth(uni)/2, 50, uni);
	outtextxy(w/2-textwidth(nam)/2, h-250, nam);
	
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	outtextxy(w/2-500, 200, title);

	outtextxy(w/2-500, 250, doan);
	outtextxy(w/2-500, 300, sv);
	
	outtextxy(w/2-250, 200, title2);
	outtextxy(w/2-250, 250, doan2);
	outtextxy(w/2-250, 300, author);

}

void ThongTinEvent(){
	ButtonEffect(btnQuayVe);
	
	if(GetAsyncKeyState(VK_LBUTTON)){
		if(btnQuayVe.isMouseHover(mx, my)){
			SetMenuSelect(0);
		}
	}
}
