using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PrimesNumberPrint
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                uint iData01 = uint.Parse(textBox1.Text);
                uint iData02 = 1;

                if (iData01 <= 200)
                {
                    label3.Text = iData01 + " 까지 발견된 소수는 다음과 같습니다. \n\n ";

                    for (uint i = 1; i <= iData01; i++)
                    {
                        for (uint j = 2; j <= i; j++)
                        {
                            if (i % j == 0)
                            {
                                if (i == j)
                                {
                                    label3.Text += j + ", ";

                                    iData02++;

                                    if (iData02 % 10 == 0)
                                    {
                                        label3.Text += "\n";
                                    }
                                }
                                else
                                    break;
                            }

                        }

                    }

                    label3.Text = label3.Text.TrimEnd(',', ' ');
                }
                else if (iData01 > 200)
                {
                    label3.Text = iData01 + "를 입력 하였습니다.\n2 ~ 200 사이의 수를 입력하세요!";
                }
            }
            catch (Exception ex)
            {
                label3.Text = ex.Message + "\n2 ~ 200 사이의 수를 입력하세요!";
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
