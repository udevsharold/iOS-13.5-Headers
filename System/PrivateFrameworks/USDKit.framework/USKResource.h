/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <USDKit/USDKit-Structs.h>
@interface USKResource : NSObject {

	shared_ptr<pxrInternal_v0_19__pxrReserved__usdkit__::ArAsset>* _asset;
	shared_ptr<const char>* _buffer;
	long long _length;

}
+(id)resourceWithResourcePath:(id)arg1 ;
+(id)resourceWithPath:(id)arg1 ;
+(id)resourceWithURL:(id)arg1 ;
+(id)resourceWithUSKScene:(id)arg1 path:(id)arg2 ;
-(void)dealloc;
-(id)dataNoCopy;
@end

