a)	trình bầy bộ chữ viết trong ngôn ngữ C
bao gồm 
26 chữ cái latinh hoa A,B,C...Z.
26 chữ cái latinh thường a,b,c...z.
10 chữ số thập phân 0,1,2...9.
Các kí hiệu toán học:+,-,*,/,=,<,>,(,)
Các kí hiệu đạt biệt : . , ; “ ‘ @ # $...
Dấu cách hay khoản trống, xuống hàng (\n) và tab (\t)
b)	trình bầy các kiểu dữ liệu cơ sở trong C
bất cứ chương trình nào ứng dụng cần sử dụng cần sử lý dữ liệu cũng cần có nơi để lưu trữ tạm thời dữ liệu ấy. Nơi mà dữ liệ được lưu trữ gọi là bộ nhớ 
dữ liệu chương trình có nhìu dạng như số (number),chuỗi (string hay text),..
c)	trình bầy khái niệm và cú pháp khai báo biến trong ngôn ngữ C
một chương trình ứng dụng có thể quản lý nhìu loại dữ liệu.trong trường hợp này ,chương trình phải chỉ định bộ nhớ cho mỗi đơn vị dữ liệu.khi chỉ định bộ nhớ ,có hai diểm cần lưu ý sau:
.kích thước bộ nhớ (kiểu dữ liệu )
.vị trí bộ nhớ (địa chỉ bộ nhớ )
Biến có thể được khai báo theo cú pháp 
   Kiểu_dữ_liệu tên_biến;
Trong đó :kiểu_dữ_liệulà jkiểu dũ liệu; tên_biến là tên biến;kết thúc khai báo biến là dấu chấm phẩy
d)	trình bầy khái niệm biến toàn cục và biến cục bộ trong ngôn ngữ C
.Biến toàn cục 
Được khai báo bên ngoài tất cả các hàm b(kể cả main)
Thường được khai báo tại khối khai báo , có thể sử dụng tại mọi vị trí trong chương trình trong các hàm for hay while
.Biến cục bộ 
Được khai báo bên trong các hàm hay khối lệnh (vd: biến đếm lệnh lắp for)
Chỉ có thể được sư dụng trong phạm vi hàm hay khối lệnh.
e)	trình bầy khái niệm và phân loại hàm trong ngôn ngữ C
Hàm là một khối lện (nhìu lệnh )thực hiện một nhiệm vụ cụ thể nào đó (tính tổng ,hiển thị thông báo đến người dùng,..)
Một cách hiểu khác về hàm :hàm là một sự chia nhỏ của chương trình.
f)trình bầy nguyên tác hoạt động của hàm trong ngôn ngữ C
.hàm có 2 loại
-là các hàm được xây dựng sẵn (build-in functions)trong ngôn ngữ C như hàm getchar,scanf,..
các hàm này được định nghĩa trong các tập tin có phần mở rộng như stdio.h,..các tập tin này được gốp phần 
thông qua chỉ định #inđue
.hàm do người dùng định nghĩa (User-defined functions)định nghĩa theo nhu cầu người dùng .các phần tiếp 
theo sẽ tiềm hiểu về cú pháp khai báo ,định nghĩa và gọi hàm loại này.

