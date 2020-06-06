/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIImage;

@interface MPArtworkRepresentation : NSObject {

	UIImage* _image;
	id _representationToken;
	CGSize _representationSize;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
@property (nonatomic,retain) id representationToken;                 //@synthesize representationToken=_representationToken - In the implementation block
+(id)representationWithSize:(CGSize)arg1 image:(id)arg2 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)debugQuickLookObject;
-(CGSize)representationSize;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(id)representationToken;
-(void)setRepresentationToken:(id)arg1 ;
@end

