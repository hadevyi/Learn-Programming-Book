using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace VOLUMN_NUIT_TRANSFORMAION
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
                double iData01 = double.Parse(textBox1.Text);
                double iData02 = double.Parse(textBox2.Text);
                double iData03 = double.Parse(textBox3.Text);
                double iData05 = iData01 * iData02 * iData03 * 1000;
                label7.Text = "직육면체 가로 : " + iData01 * 10 + "mm 세로 : " + iData02 * 10 + "mm 높이 : " + iData03 * 10 + "mm 의\n\n부피는 " + iData05 + " 입니다.";
            }
            catch
            {
                label7.Text = "입력 문자열의 형식이 잘못되었습니다.";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                double iData01 = double.Parse(textBox1.Text);
                double iData02 = double.Parse(textBox2.Text);
                double iData03 = double.Parse(textBox3.Text);
                double iData04 = iData01 * iData02 * iData03;
                label7.Text = "직육면체 가로 : " + iData01 + "cm 세로 : " + iData02 + "cm 높이 : " + iData03 + "cm 의\n\n부피는 " + iData04 + " 입니다.";
            }
            catch
            {
                label7.Text = "입력 문자열의 형식이 잘못되었습니다.";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                double iData01 = double.Parse(textBox1.Text);
                double iData02 = double.Parse(textBox2.Text);
                double iData03 = double.Parse(textBox3.Text);
                double iData06 = iData01 * iData02 * iData03 * 0.000001;
                label7.Text = "직육면체 가로 : " + iData01 * 0.01 + "cm 세로 : " + iData02 * 0.01 + "cm 높이 : " + iData03 * 0.01 + "cm 의\n\n부피는 " + iData06 + " 입니다.";
            }
            catch
            {
                label7.Text = "입력 문자열의 형식이 잘못되었습니다.";
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            label7.Text = "결과가 표시되는 곳입니다!";
            textBox1.Text = "200";
            textBox2.Text = "30";
            textBox3.Text = "4";
        }
    }
}
