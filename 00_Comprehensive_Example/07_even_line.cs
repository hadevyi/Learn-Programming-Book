using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Mediterm16_1
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
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                int iData = 0;
                label4.Text = "";

                if (textBox1.Text == "")
                {
                    label4.Text = "수를 입력하는 Text Box가 비었습니다. 입력해주세요.";
                }
                else if (textBox2.Text == "")
                {
                    label4.Text = "Line을 입력하는 Text Box가 비었습니다. 입력해주세요.";
                }
                else if (iData01 <= 0 || iData01 > 100)
                {
                    label4.Text = "수는 1~100 사이의 수만 입력 가능합니다. 다시 입력해주세요.";
                }
                else if (iData02 <= 0 || iData02 > 10)
                {
                    label4.Text = "Line은 1~10 사이의 수만 입력 가능합니다. 다시 입력해주세요.";
                }
                else
                {
                    for (int i = 1; i <= iData01; i++)
                    {
                        if (i % 2 == 0)
                        {
                            label4.Text += i + "  ";

                            iData++;

                            if (iData % iData02 == 0)
                            {
                                label4.Text += "\n";
                            }
                        }
                        else
                        { }
                    }
                }
            }
            catch (Exception ex)
            {
                label4.Text = ex.Message;
            }
        }
    }
}
