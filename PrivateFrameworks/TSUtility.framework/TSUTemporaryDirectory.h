/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(id)init;
-(void)dealloc;
-(id)path;
-(id)URL;
-(id)initWithSignature:(id)arg1 ;
-(void)leakTemporaryDirectory;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 ;
@end

