/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement {

	MSVLyricsLine* _parentLine;
	MSVLyricsWord* _nextWord;

}

@property (nonatomic,retain) MSVLyricsLine * parentLine;              //@synthesize parentLine=_parentLine - In the implementation block
@property (nonatomic,retain) MSVLyricsWord * nextWord;                //@synthesize nextWord=_nextWord - In the implementation block
-(id)init;
-(void)setParentLine:(MSVLyricsLine *)arg1 ;
-(MSVLyricsLine *)parentLine;
-(MSVLyricsWord *)nextWord;
-(void)setNextWord:(MSVLyricsWord *)arg1 ;
@end
