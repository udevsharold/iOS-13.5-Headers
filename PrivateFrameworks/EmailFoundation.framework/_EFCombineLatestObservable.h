/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFObservable.h>

@class NSArray;

@interface _EFCombineLatestObservable : EFObservable {

	NSArray* _observables;

}

@property (nonatomic,copy) NSArray * observables;              //@synthesize observables=_observables - In the implementation block
-(id)subscribe:(id)arg1 ;
-(id)initWithObservables:(id)arg1 ;
-(NSArray *)observables;
-(void)setObservables:(NSArray *)arg1 ;
@end
