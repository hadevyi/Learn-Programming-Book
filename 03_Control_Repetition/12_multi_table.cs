using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MultiTablePrint
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
                int iData03 = 1;

                if (iData01 > iData02)
                {
                    label4.Text = "시작 단수가 마지막 단수보다 작거나 같아야 합니다!";
                }
                else if (iData01 >= 2 && iData02 <= 9)
                {
                    label4.Text = "구구단 " + iData01 + "부터 " + iData02 + " 단까지 입니다!\n\n";

                    for (int i = iData01; i <= iData02; i++)
                    {
                        for (int j = 2; j <= 9; j++)
                        {
                            iData03 = iData01 * j;

                            label4.Text += iData01 + " * " + j + " = " + iData03 + "\n";
                        }

                        iData01++;
                        label4.Text += "\n";
                    }
                }
                else
                {
                    label4.Text = "2와 9사이의 수를 입력 하세요!";
                }
            }
            catch (Exception ex)
            {
                label4.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
