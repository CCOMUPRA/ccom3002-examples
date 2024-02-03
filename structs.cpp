#include <iostream>

using namespace std;

struct actor
{
	string name;
	string lastName;
	string role;
	int age;
};

struct movie
{
	string title;
	string genre;
	string releaseDate;
	actor cast[2];
	int duration;
};

struct series
{
	string title;
	string genre;
	string releaseDate;
	actor cast[2];
	int numSeasons;
	int numEpisodes;
};

struct streamingService
{
	string title;
	movie movieRepository[2];
	series seriesRepository[2];
};

const int COUNT = 2;

void storeInfo(streamingService &jVideo);
void print(streamingService jVideo);
void getAllGenres(streamingService jVideo);
void getAllCastMembersFromSeries1(streamingService jVideo, int index);
void getAverageMovieDuration(streamingService jVideo);

int main()
{
	streamingService jVideo;

	storeInfo(jVideo);
	print(jVideo);
	getAllGenres(jVideo);
	getAllCastMembersFromSeries1(jVideo, 0);
	getAverageMovieDuration(jVideo);

	int index = -1;
	cin >> index;
	getOneThing(jVideo, index);

	return 0;
}

void getOneThing(streamingService jVideo, int index)
{
	int arr[3];
}

void storeInfo(streamingService &jVideo)
{
	cout << "TITLE: " << endl;
	cin >> jVideo.title;
	cout << "MOVIES: " << endl;
	for (int i = 0; i < COUNT; i++)
	{
		cout << "MOVIE: " << i << endl;
		cin >> jVideo.movieRepository[i].title;
		cin >> jVideo.movieRepository[i].genre;
		cin >> jVideo.movieRepository[i].duration;
		cin >> jVideo.movieRepository[i].releaseDate;
		for (int j = 0; j < COUNT; j++)
		{
			cout << "CAST MEMBER: " << j << endl;
			cin >> jVideo.movieRepository[i].cast[j].name;
			cin >> jVideo.movieRepository[i].cast[j].lastName;
			cin >> jVideo.movieRepository[i].cast[j].role;
			cin >> jVideo.movieRepository[i].cast[j].age;
		}
	}
	cout << "SERIES: " << endl;
	for (int i = 0; i < COUNT; i++)
	{
		cout << "SERIE: " << i << endl;
		cin >> jVideo.seriesRepository[i].title;
		cin >> jVideo.seriesRepository[i].genre;
		cin >> jVideo.seriesRepository[i].numEpisodes;
		cin >> jVideo.seriesRepository[i].numSeasons;
		cin >> jVideo.seriesRepository[i].releaseDate;
		for (int j = 0; j < COUNT; j++)
		{
			cout << "CAST MEMBER: " << j << endl;
			cin >> jVideo.seriesRepository[i].cast[j].name;
			cin >> jVideo.seriesRepository[i].cast[j].lastName;
			cin >> jVideo.seriesRepository[i].cast[j].role;
			cin >> jVideo.seriesRepository[i].cast[j].age;
		}
	}
}

void print(streamingService jVideo)
{
	cout << "TITLE: " << endl;
	cout << jVideo.title;
	cout << "MOVIES: " << endl;
	for (int i = 0; i < COUNT; i++)
	{
		cout << "MOVIE: " << i << endl;
		cout << jVideo.movieRepository[i].title << endl;
		cout << jVideo.movieRepository[i].genre << endl;
		cout << jVideo.movieRepository[i].duration << endl;
		cout << jVideo.movieRepository[i].releaseDate << endl;
		for (int j = 0; j < COUNT; j++)
		{
			cout << "CAST MEMBER: " << j << endl;
			cout << jVideo.movieRepository[i].cast[j].name << endl;
			cout << jVideo.movieRepository[i].cast[j].lastName << endl;
			cout << jVideo.movieRepository[i].cast[j].role << endl;
			cout << jVideo.movieRepository[i].cast[j].age << endl;
		}
	}
	cout << "SERIES: " << endl;
	for (int i = 0; i < COUNT; i++)
	{
		cout << "SERIE: " << i << endl;
		cout << jVideo.seriesRepository[i].title << endl;
		cout << jVideo.seriesRepository[i].genre << endl;
		cout << jVideo.seriesRepository[i].numEpisodes << endl;
		cout << jVideo.seriesRepository[i].numSeasons << endl;
		cout << jVideo.seriesRepository[i].releaseDate << endl;
		for (int j = 0; j < COUNT; j++)
		{
			cout << "CAST MEMBER: " << j << endl;
			cout << jVideo.seriesRepository[i].cast[j].name << endl;
			cout << jVideo.seriesRepository[i].cast[j].lastName << endl;
			cout << jVideo.seriesRepository[i].cast[j].role << endl;
			cout << jVideo.seriesRepository[i].cast[j].age << endl;
		}
	}
}

void getAllGenres(streamingService jVideo)
{
	for (int i = 0; i < COUNT; i++)
	{
		cout << jVideo.movieRepository[i].genre << " ";
		cout << jVideo.seriesRepository[i].genre << " ";
	}
	cout << endl;
}

void getAllCastMembersFromSeries1(streamingService jVideo, int index)
{
	for (int i = 0; i < COUNT; i++)
	{
		cout << jVideo.seriesRepository[index].cast[i].name << endl;
	}
}

void getAverageMovieDuration(streamingService jVideo)
{
	float avg = 0;
	float acc = 0;

	for (int i = 0; i < COUNT; i++)
	{
		acc += jVideo.movieRepository[i].duration;
	}

	avg = acc / COUNT;
	cout << "PROMEDIO " << avg << endl;
}