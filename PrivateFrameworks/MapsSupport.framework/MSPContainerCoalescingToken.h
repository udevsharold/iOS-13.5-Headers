/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerCoalescingToken.h>

@protocol MSPContainerCoalescingToken <NSObject>
@required
-(void)endCoalescingEdits;

@end


@protocol NSObjectNSCopying;
@class MSPContainer, NSString;

@interface MSPContainerCoalescingToken : NSObject <MSPContainerCoalescingToken> {

	MSPContainer* _container;
	id<NSObject><NSCopying> _context;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithContainerOwner:(id)arg1 context:(id)arg2 ;
-(void)endCoalescingEdits;
@end

