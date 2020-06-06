/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/EspressoBrickTensor.h>

@protocol MTLTexture;
@interface EspressoBrickTensorMetal : EspressoBrickTensor {

	id<MTLTexture> _texture;

}

@property (retain) id<MTLTexture> texture;              //@synthesize texture=_texture - In the implementation block
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)texture;
@end

