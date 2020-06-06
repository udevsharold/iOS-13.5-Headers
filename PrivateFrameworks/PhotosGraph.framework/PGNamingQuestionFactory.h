/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@class PHFetchResult;

@interface PGNamingQuestionFactory : PGSurveyQuestionFactory {

	PHFetchResult* _persons;

}

@property (nonatomic,retain) PHFetchResult * persons;              //@synthesize persons=_persons - In the implementation block
-(unsigned short)questionType;
-(PHFetchResult *)persons;
-(void)setPersons:(PHFetchResult *)arg1 ;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

