/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSConcreteObservation.h>
#import <libobjc.A.dylib/NSOwningObserver.h>

@class NSObservation, NSString;

@interface _NSOwningObservingObservation : _NSConcreteObservation <NSOwningObserver> {

	NSObservation* _ownedObservation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObservation:(id)arg1 ;
@end

