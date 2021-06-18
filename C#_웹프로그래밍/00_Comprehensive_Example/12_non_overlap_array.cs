using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Final16_3
{
    public partial class Form1 : Form
    {
        int[] arr;

        public Form1()
        {
            InitializeComponent();

            arr = new int[10];
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                label2.Text = "";
                System.Random ran = new System.Random();
                int num = 0;

                for (int i = 0; i < arr.Length; i++)
                {
                    num = ran.Next(1,16);

                    if (i == 0)
                        arr[i] = num;
                    else
                    {
                        for (int j = 0; j < i; j++)
                        {
                            if (arr[j] == num)
                            {
                                i--;
                                break;
                            }
                            else
                            {
                                arr[i] = num;
                            }
                        }
                    }
                }

                for (int i = 0; i < arr.Length; i++)
                {
                    label2.Text += "iarray[" + i + "] = " + arr[i] + "    ";

                    if (i % 2 == 1)
                        label2.Text += "\n";
                }

                int max = arr[0];
                int min = arr[0];
                double avg = arr[0];

                for (int i = 1; i < arr.Length; i++)
                {
                    max = max < arr[i] ? arr[i] : max;
                    min = min > arr[i] ? arr[i] : min;
                    avg += arr[i];
                }

                label2.Text += "\n\n\n배열값의 최대는 " + max + "\n\n배열값의 최소는 " + min + "\n\n10 개 원소 배열값의 평균은 " + (avg / arr.Length);
            }
            catch (Exception ex)
            {
                label2.Text = ex.Message;
            }
        }
    }
}
