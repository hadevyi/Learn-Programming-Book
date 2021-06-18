using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MultiplicationOfThree
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text += "1";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text += "2";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text += "3";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox1.Text += "4";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox1.Text += "5";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            textBox1.Text += "6";
        }

        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Text += "7";
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox1.Text += "8";
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Text += "9";
        }

        private void button10_Click(object sender, EventArgs e)
        {
            textBox1.Text += "0";
        }

        private void button11_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            label3.Text = "결과가 나오는 곳입니다!";
        }

        private void button12_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = 0;
                if (iData01 > 100)
                {
                    label3.Text = "100 이하의 수를 입력하세요!";
                }
                else
                {
                    label3.Text = " ";

                    for (int i = 1; i <= iData01; i++)
                    {
                        if (i % 3 == 0)
                        {
                            label3.Text += " 짝 ";
                            iData02++;
                        }
                        else
                        {
                            label3.Text += " " + i + " ";
                            iData02++;
                        }
                        if (i < 9)
                        {
                            label3.Text += " ";
                        }
                        if (iData02 % 10 == 0)
                        {
                            label3.Text += "\n";
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                label3.Text = ex.Message;
            }
        }

        private void button13_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
