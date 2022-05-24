# 21020318---LTNC-Tic-tac-toe
1. Cách cài đặt:
- Download code, giải nén
- Cài MinGW-W64
- Cài thư viện SDL2 và SDL image
- Build bằng mingw32-make và chạy ./main trong terminal 

2. 
- Tic tac toe là 1 game cờ ca-rô trên bàn cờ 3x3, người thắng là người đầu tiên tạo được một
dãy 3 kí hiệu, ngang dọc hay chéo đều được.

3. Các chức năng: Chơi với máy (PvE), chơi với bạn bè (PvP)
- Khi chọn chế độ chơi với bạn bè, sẽ có 2 người tham gia trò chơi, người chơi thứ nhất (P1) sẽ có kí hiệu O màu xanh, người chơi thứ 2 (P2) sẽ có kí hiệu X màu đỏ, P1 là người đi trước, sau đó là P2, mỗi người sẽ lần lượt đặt nước đi của mình bằng cách click chuột, ai tạo được dãy 3 kí hiệu đầu tiên sẽ thắng, khi đó cả bàn chơi sẽ chuyển thành màu của người đó. Nếu 2 người hoà nhau, bàn chơi sẽ chuyển thành màu đen.
- Khi chọn chế độ với máy, người chơi sẽ có kí hiệu O màu xanh, máy có kí hiệu X màu đỏ, người chơi sẽ đi trước sau đó đến máy.
+ Demo: https://youtu.be/UUiKMK-69pY

4. Các kĩ thuật: mảng, con trỏ, đồ hoạ, sử dụng thư viện để load ảnh, xử lí sự kiện chuột.

# Kết luận
Sau ghi làm xong game này, em thấy rất vui vì bản thân đã làm được một "phần mềm" theo ý mình, tuy không quá phức tạp, đồ hoạ có phần hơi xấu. Tuy nhiên trong tương lai em sẽ cố gắng cải tiến nó bằng cách thêm các tính năng như nhạc nền, AI có nhiều độ khó hơn, có thể chơi PvP qua mạng, có hoạt ảnh đẹp hơn, thay đổi được kích thước bàn cờ, ...
Điều em rút ra được là, giới hạn duy nhất chính là trí óc của mình, chỉ cần có ý tưởng, ta có thể sáng tạo rất nhiều thứ với những công cụ lập trình này.
