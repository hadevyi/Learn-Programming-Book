using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ToMaxSumMul
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
                uint iData01 = uint.Parse(textBox1.Text);
                uint iData02 = uint.Parse(textBox2.Text);
                double dData01 = 0;
                double dData02 = 1;
                uint i;

                if (iData01 < iData02)
                {
                    label4.Text = "증가값은 최대값보다 작은 수를 입력하세요!";
                }
                else
                {
                    for (i = 1; i <= iData01; i += iData02)
                    {
                        dData01 = dData01 + i;
                        dData02 = dData02 * i;
                    }

                    label4.Text = "1 부터 입력된 최대 값:" + iData01 + " 까지  증가값: " + iData02 + " 로 반복한 결과\n\n<< i 의 더하기 합계 값:" + dData01 + " >>\n\n<< i 의 곱하기 합계 값:" + dData02 + " >>";
                }
            }
            catch (Exception ex)
            {
                label4.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            label4.Text = "결과가 나오는 곳입니다";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
