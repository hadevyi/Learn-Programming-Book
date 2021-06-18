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
        int count = 0;
        int max;
        int[] iData01;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int i;
                label1.Text = "";
                int Data = int.Parse(textBox1.Text);


                if (count >= max)
                    label1.Text = "데이터는 "+max+"개만 입력할 수 있습니다!\n\n추가적으로 데이터를 넣을 수 없습니다.\n\n데이터 입력이 0개인 경우 크기를 세팅해주세요.";
                else
                {
                    iData01[count] = Data;

                    for (i = 0; i <= count; i++)
                    {

                        label1.Text += "iarray[" + i + "] = " + iData01[i] + "       ";

                        if ((i + 1) % 2 == 0)
                            label1.Text += "\n";
                    }

                    count++;

                }

            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                int size = int.Parse(textBox2.Text);
                iData01 = new int[size];
                max = size;
            }
            catch(Exception ex)
            {
                label1.Text = ex.Message;
            }
        }
    }
}
