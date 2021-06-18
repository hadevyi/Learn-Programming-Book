using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace OutputAccumulation
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

                if (iData01 > 0 && iData01 <= 20)
                {
                    label3.Text = "수행된 i 값 : ";

                    for (int i = 1; i <= iData01; i++)
                    {
                        label3.Text += i + ", ";

                        if (i % 7 == 0)
                        {
                            label3.Text += "\n\n";
                        }
                    }

                    label3.Text = label3.Text.TrimEnd(',', ' ');
                }
                else if (iData01 <= 0 || iData01 > 20)
                {
                    label3.Text = "1과 20 사이의 수를 입력 하세요!";
                }
            }
            catch
            {
                label3.Text = "입력 문자열의 형식이 잘못되었습니다.\n1과 20사이의 정수를 입력 하세요!";
            }
        }
    }
}
