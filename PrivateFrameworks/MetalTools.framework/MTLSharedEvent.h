/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLSharedEvent <MTLEvent>
@property (assign) unsigned long long signaledValue; 
@required
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3;
-(void)setSignaledValue:(unsigned long long)arg1;
-(unsigned long long)signaledValue;
-(id)newSharedEventHandle;

@end

