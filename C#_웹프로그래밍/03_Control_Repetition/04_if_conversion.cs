using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IF_CONVERSTION
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
                double iData02 = double.Parse(textBox2.Text);
                double iData03;

                if (iData01 == 1)
                {
                    iData03 = iData02 * 3.28;
                    textBox3.Text = iData03 + "";
                    label6.Text = "feet";
                }
                else if (iData01 == 2)
                {
                    iData03 = iData02 / 3.28;
                    textBox3.Text = iData03 + "";
                    label6.Text = "meter";
                }
                else
                {
                    textBox1.Text = "1 또는 2를 입력하세요!";
                }
            }
            catch
            {
                if (textBox1.Text == "")
                {
                    textBox1.Text = "1 또는 2를 입력하세요!";
                }
                else if (textBox2.Text == "")
                {
                    textBox2.Text = "환산할 수를 입력하세요!";
                }
                else
                {
                    textBox3.Text = "입력 문자열의 형식이 잘못되었습니다.";
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            label6.Text = "";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
