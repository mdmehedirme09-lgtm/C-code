import matplotlib.pyplot as plt
import numpy as np

# Data
gains = ['100', '10', '1']
x_pos = np.arange(len(gains))

# Errors (positive polarity)
amp1_pos = [5.71, 13.6, -12.5]
amp2_pos = [4.29, -1.3, -29.7]
x100_pos = [-1.33, np.nan, np.nan]

# Errors (negative polarity)
amp1_neg = [12.31, 4.0, 21.7]
amp2_neg = [26.67, -6.5, -11.1]
x100_neg = [2.86, np.nan, np.nan]

width = 0.15

plt.figure(figsize=(12, 6))

plt.bar(x_pos - 2*width, amp1_pos, width, label='Amp #1 (+ve)', color='blue')
plt.bar(x_pos - width, amp2_pos, width, label='Amp #2 (+ve)', color='green')
plt.bar(x_pos, x100_pos, width, label='X100 (+ve)', color='red')

plt.bar(x_pos + width, amp1_neg, width, label='Amp #1 (-ve)', color='lightblue')
plt.bar(x_pos + 2*width, amp2_neg, width, label='Amp #2 (-ve)', color='lightgreen')
plt.bar(x_pos + 3*width, x100_neg, width, label='X100 (-ve)', color='pink')

# Reference lines
plt.axhline(y=4, color='r', linestyle='--', linewidth=1, label='X100 ±4%')
plt.axhline(y=-4, color='r', linestyle='--', linewidth=1)
plt.axhline(y=30, color='gray', linestyle='--', linewidth=1, label='Amp #1/#2 ±30%')
plt.axhline(y=-30, color='gray', linestyle='--', linewidth=1)

plt.xlabel('Gain Setting')
plt.ylabel('Gain Error (%)')
plt.title('Gain Error Comparison of DC Amplifiers')
plt.xticks(x_pos + width, gains)
plt.legend(bbox_to_anchor=(1.05, 1), loc='upper left')
plt.grid(axis='y', alpha=0.3)
plt.tight_layout()
plt.show()