/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCHeadlineExperimentalTitleMetadata : NSObject {

	BOOL _isTitleExperimental;
	int _treatmentState;
	long long _arrayIndexUsedforTitle;
	NSString* _chosenTitle;

}

@property (nonatomic,readonly) BOOL isTitleExperimental;                      //@synthesize isTitleExperimental=_isTitleExperimental - In the implementation block
@property (nonatomic,readonly) long long arrayIndexUsedforTitle;              //@synthesize arrayIndexUsedforTitle=_arrayIndexUsedforTitle - In the implementation block
@property (nonatomic,readonly) int treatmentState;                            //@synthesize treatmentState=_treatmentState - In the implementation block
@property (nonatomic,copy,readonly) NSString * chosenTitle;                   //@synthesize chosenTitle=_chosenTitle - In the implementation block
-(NSString *)chosenTitle;
-(id)initWithChosenTitle:(id)arg1 isTitleExperimental:(BOOL)arg2 arrayIndexUsedforTitle:(long long)arg3 treatmentState:(int)arg4 ;
-(BOOL)isTitleExperimental;
-(long long)arrayIndexUsedforTitle;
-(int)treatmentState;
@end

