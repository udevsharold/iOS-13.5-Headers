/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/MDLTexture.h>

@class MDLTexture;

@interface MDLNormalMapTexture : MDLTexture {

	float _smoothness;
	float _contrast;
	MDLTexture* _sourceTexture;

}
-(id)generateDataAtLevel:(long long)arg1 ;
-(id)initByGeneratingNormalMapWithTexture:(id)arg1 name:(id)arg2 smoothness:(float)arg3 contrast:(float)arg4 ;
@end

