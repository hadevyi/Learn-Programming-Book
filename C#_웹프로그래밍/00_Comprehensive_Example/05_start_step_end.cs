using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Mediterm14_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int iData1 = int.Parse(textBox1.Text);
                int iData2 = int.Parse(textBox2.Text);
                int p = 0;
                int d = 1;
                if (iData1 >= 1 && iData1 <= 20 && iData2 >= 1 && iData2 <= 20)
                {
                    if (iData1 > iData2)
                    {
                        for (int i = 1; i <= iData1; i = i + iData2)
                        {
                            p += i;
                            d *= i;
                            label3.Text = "1부터 " + iData1 + "까지 증가값 " + iData2 + "로\n더한값 : " + p + "\n곱한값 : " + d;
                        }
                    }
                    else
                        label3.Text = "증가값이 최대값보다 작아야합니다.";
                }
                else
                    label3.Text = "1~20 사이의 수를 입력하세요.";
            }
            catch
            {
                label3.Text = "입력 값이 잘못되었습니다";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            label3.Text = "결과가 출력되는 곳 입니다.";
            textBox1.Text = "";
            textBox2.Text = "";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
