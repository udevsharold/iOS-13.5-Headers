/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUJSObject.h>

@class NUIdentifier;

@interface NUJSIdentifier : NUJSObject

@property (nonatomic,readonly) NUIdentifier * identifier; 
-(NUIdentifier *)identifier;
-(id)toString;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(BOOL)hasProperty:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
@end
