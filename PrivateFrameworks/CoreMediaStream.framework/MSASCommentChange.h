/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSASComment;

@interface MSASCommentChange : NSObject {

	int _deletionIndex;
	int _type;
	MSASComment* _comment;

}

@property (nonatomic,retain) MSASComment * comment;              //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) int deletionIndex;                  //@synthesize deletionIndex=_deletionIndex - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(MSASComment *)comment;
-(void)setComment:(MSASComment *)arg1 ;
-(int)deletionIndex;
-(void)setDeletionIndex:(int)arg1 ;
@end

