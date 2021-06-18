using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IF_RELATIONAL_OPERTOR
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
                string sData01 = textBox3.Text;

                if (textBox3.Text == "")
                {
                    label5.Text = "Operator에 관계연산자 하나를 입력하세요!";
                }
                else
                {
                    if (textBox3.Text == "==")
                    {
                        bool bData01 = iData01 == iData02;
                        label5.Text = iData01 + " == " + iData02 + " 의 결과는 " + bData01;
                        textBox3.Text = "";
                    }
                    else if (textBox3.Text == "!=")
                    {
                        bool bData02 = iData01 != iData02;
                        label5.Text = iData01 + " != " + iData02 + " 의 결과는 " + bData02;
                        textBox3.Text = "";
                    }
                    else if (textBox3.Text == "<=")
                    {
                        bool bData03 = iData01 <= iData02;
                        label5.Text = iData01 + " <= " + iData02 + " 의 결과는 " + bData03;
                        textBox3.Text = "";
                    }
                    else if (textBox3.Text == ">=")
                    {
                        bool bData04 = iData01 >= iData02;
                        label5.Text = iData01 + " >= " + iData02 + " 의 결과는 " + bData04;
                        textBox3.Text = "";
                    }
                    else if (textBox3.Text == ">")
                    {
                        bool bData05 = iData01 > iData02;
                        label5.Text = iData01 + " > " + iData02 + " 의 결과는 " + bData05;
                        textBox3.Text = "";
                    }
                    else if (textBox3.Text == "<")
                    {
                        bool bData06 = iData01 < iData02;
                        label5.Text = iData01 + " < " + iData02 + " 의 결과는 " + bData06;
                        textBox3.Text = "";
                    }
                    else
                    {
                        label5.Text = sData01 + " 는 올바른 관계연산자가 아님\n\n     올바른 관계연산자를 입력하세요!";
                    }
                }
            }
            catch (Exception Ex)
            {
                if (textBox1.Text == "")
                {
                    label5.Text = "숫자1에 정수를 입력하세요!";
                }
                else if (textBox2.Text == "")
                {
                    label5.Text = "숫자2에 정수를 입력하세요!";
                }
                else
                {
                    label5.Text = Ex.Message;
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "2";
            textBox2.Text = "3";
            textBox3.Text = "";
            label5.Text = "결과가 나오는 곳 입니다!";
        }
    }
}
