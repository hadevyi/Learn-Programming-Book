using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RandomMaxMin
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int i;
            int count = 0;
            int[] iData01;
            label1.Text = "";
            iData01 = new int[10];
            System.Random rData01 = new System.Random();

            for (i = 0; i < iData01.Length; i++)
            {
                iData01[i] = rData01.Next(1, 101);

                label1.Text += "iarray[" + count + "] = " + iData01[i] + "      ";

                if (count % 2 == 1)
                {
                    label1.Text += "\n";
                }

                count++;
            }

            int max = iData01[0];
            int min = iData01[0];
            double sum = iData01[0];

            for (i = 1; i < iData01.Length; i++)
            {
                if (max < iData01[i])
                {
                    max = iData01[i];
                }
                if (min > iData01[i])
                {
                    min = iData01[i];
                }

                sum += iData01[i];
            }

            double dData01 = sum / iData01.Length;

            label1.Text += "\n\n배열값의 최대는 " + max + "\n\n배열값의 최소는 " + min + "\n\n10 개 원소 배열값의 평균은 " + dData01;
        }
    }
}
