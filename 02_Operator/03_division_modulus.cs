using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DIVISION_MODULUS
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
                int iData03 = iData01 / iData02;
                int iData04 = iData01 % iData02;
                label2.Text = iData01 + " 나누기 " + iData02 + "의 몫은 " + iData03 + "이고 나머지는 " + iData04 + "입니다.";
            }
            catch
            {
                label2.Text = "입력 문자열의 형식이 잘못되었습니다.";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "5";
            textBox2.Text = "2";
            label2.Text = "결과가 표시되는 곳입니다!";
        }
    }
}
