/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class KonaClip;

@interface TransitionInput : NSObject {

	int _ID;
	KonaClip* _clip;
	CGSize _naturalSize;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) int ID;                                   //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                       //@synthesize naturalSize=_naturalSize - In the implementation block
@property (assign,nonatomic) KonaClip * clip;                          //@synthesize clip=_clip - In the implementation block
-(id)description;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(KonaClip *)clip;
-(CGSize)naturalSize;
-(int)ID;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setClip:(KonaClip *)arg1 ;
-(void)setID:(int)arg1 ;
@end

