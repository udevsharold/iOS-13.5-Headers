/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTexture;
@interface ARUISpriteTexture : NSObject {

	float _height;
	float _width;
	id<MTLTexture> _texture;

}

@property (nonatomic,readonly) float height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) float width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> texture;              //@synthesize texture=_texture - In the implementation block
-(float)width;
-(float)height;
-(id)initWithImage:(id)arg1 ;
-(id<MTLTexture>)texture;
@end

