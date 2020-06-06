/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _TVRCMediaRemoteLegacyKeyboardImpl, _TVRCMediaRemoteRemoteTextInputKeyboardImpl, _TVRCMRTelevisionWrapper;

@interface _TVRCMediaRemoteKeyboardImplManager : NSObject {

	NSString* _version;
	_TVRCMediaRemoteLegacyKeyboardImpl* _legacyImpl;
	_TVRCMediaRemoteRemoteTextInputKeyboardImpl* _rtiImpl;
	_TVRCMRTelevisionWrapper* _television;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;              //@synthesize television=_television - In the implementation block
-(_TVRCMRTelevisionWrapper *)television;
-(id)keyboardImpl;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(id)initWithTelevisionSystemVersion:(id)arg1 ;
@end

