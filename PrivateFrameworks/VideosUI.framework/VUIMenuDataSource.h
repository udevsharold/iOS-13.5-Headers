/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VUIMenuDataSource : NSObject {

	NSArray* _mainMenuItems;
	NSArray* _genreMenuItems;

}

@property (nonatomic,retain) NSArray * mainMenuItems;               //@synthesize mainMenuItems=_mainMenuItems - In the implementation block
@property (nonatomic,retain) NSArray * genreMenuItems;              //@synthesize genreMenuItems=_genreMenuItems - In the implementation block
-(id)initWithMainMenuItems:(id)arg1 genreMenuItems:(id)arg2 ;
-(NSArray *)mainMenuItems;
-(void)setMainMenuItems:(NSArray *)arg1 ;
-(NSArray *)genreMenuItems;
-(void)setGenreMenuItems:(NSArray *)arg1 ;
@end

