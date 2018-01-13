Welcome to the homepage of LEO

LEO: learning to accelerate symbolic execution via code transformation

There are many folders. We explain each folder in detail as follows.

figure: the figures of our results in the paper, which are more clear and larger.

tool: the implementation (i.e.,source code) of our tool, including method optimization code, library optimization code, and optimization tuning code -- program-splitter and local-optimizer.

script: the scripts used in our study

results: all the detailed experiemntal results in our study
	
	* trainingset-Xmin (5,10,15,20): results of LEO under different training time limits
		
		** In each folder, there are results of LEO within different testing time limits: out-xx.csv includes the raw data of ALL and NO and out-SMO-xx.csv includes the raw data of LEO.
		
		** In particular, in the folder of trainingset-10min, there are liboff/libon/methodoff/methodon folders, containing the results of various variants of LEO; Also, there is mutation folder, containing the results of LEO in terms of mutation score.
	
	* algorithm: results of LEO with different machine learning algorithms

mutants: all the mutants used in our study

subject: the GNU Coreutils programs used in our study

features: the list of features used in LEO

Thanks very much!

Bests!
