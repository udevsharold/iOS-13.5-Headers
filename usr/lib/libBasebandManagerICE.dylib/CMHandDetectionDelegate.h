/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libBasebandManagerICE.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libBasebandManagerICE.dylib/libBasebandManagerICE.dylib-Structs.h>
#import <libobjc.A.dylib/CMCallHandednessDelegate.h>

@class NSString;

@interface CMHandDetectionDelegate : NSObject <CMCallHandednessDelegate> {

	block<void ()(CMCallHandedness)>* fCallBack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callHandednessManager:(id)arg1 didUpdateState:(long long)arg2 ;
-(void)registerHandler:(block<void ()(CMCallHandedness)>*)arg1 ;
@end

