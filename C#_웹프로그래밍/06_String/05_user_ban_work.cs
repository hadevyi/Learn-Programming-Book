using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp2
{
    public partial class Form1 : Form
    {

        string[] sUnacceptableWords;
        int count = 0;

        public Form1()
        {
            InitializeComponent();
            sUnacceptableWords = new string[10];
        }

        private void button1_Click(object sender, EventArgs e)
        {
        }

        private void button2_Click(object sender, EventArgs e)
        {
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            try
            {
                string sData01 = textBox1.Text;

                for (int i = 0; i < sUnacceptableWords.Length; i++)
                {
                    string sUAW = sUnacceptableWords[i];
                    int iData01 = sData01.IndexOf(sUAW);

                    while (iData01 >= 0)
                    {
                        string sData02 = sData01.Substring(0, iData01);
                        string sData03 = sData01.Substring(iData01 + sUAW.Length);

                        sData01 = sData02 + "(금지어)" + sData03;
                        iData01 = sData01.IndexOf(sUAW);
                    }

                    textBox1.Text = sData01;
                }
            }
            catch(Exception ex)
            {
               
            }
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            try
            {
                if (count <= 9)
                {
                    label1.Text = "";
                    sUnacceptableWords[count] = textBox2.Text;

                    for (int i = 0; i <= count; i++)
                    {
                        label1.Text += (i + 1) + "번째 : " + sUnacceptableWords[i] + "    ";

                        if ((i + 1) % 5 == 0)
                            label1.Text += "\n";
                    }
                    count++;
                }
                else
                {
                    label1.Text += "\n금지어의 갯수는 10개로 더 추가될 수 없습니다.";
                }
            }
            catch(Exception ex)
            {
                label1.Text = ex.Message;
            }
        }
    }
}
