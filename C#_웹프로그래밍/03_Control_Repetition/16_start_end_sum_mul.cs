using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace StartEndSumMul
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
                uint uData01 = uint.Parse(textBox1.Text);
                uint uData02 = uint.Parse(textBox2.Text);
                uint uData03 = 0;
                uint uData04 = 1;

                if (uData01 <= 0)
                {
                    label4.Text = "시작값은 0보다 큰 값이어야 합니다!";
                }
                else if (uData01 >= uData02)
                {
                    label4.Text = "시작값은 마지막값 보다 작은 값이어야 합니다!";
                }
                else if (uData02 > 20)
                {
                    label4.Text = "마지막값은 21보다 작은 값이어야 합니다!";
                }
                else
                {
                    for (uint i = uData01; i <= uData02; i++)
                    {
                        uData03 += i;
                        uData04 *= i;
                    }
                    label4.Text = uData01 + "부터 " + uData02 + "까지의 합은 " + uData03 + "\n곱은 " + uData04 + " 입니다.";
                }
            }
            catch (Exception ex)
            {
                if (textBox1.Text == "")
                {
                    label4.Text = "시작값을 입력하세요!";
                }
                else if (textBox2.Text == "")
                {
                    label4.Text = "마지막값을 입력하세요!";
                }
                else
                {
                    label4.Text = ex.Message;
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
