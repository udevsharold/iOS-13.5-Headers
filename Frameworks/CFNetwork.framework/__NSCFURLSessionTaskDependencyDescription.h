/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskDependencyDescription.h>

@class __NSURLSessionTaskDependencyResourceIdentifier;

@interface __NSCFURLSessionTaskDependencyDescription : NSURLSessionTaskDependencyDescription {

	float _priority;
	BOOL _exclusive;
	__NSURLSessionTaskDependencyResourceIdentifier* _dependent;
	__NSURLSessionTaskDependencyResourceIdentifier* _parent;

}
-(void)dealloc;
-(id)description;
-(id)_parent;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(id)_dependent;
-(id)initWithPriority:(float)arg1 exclusive:(BOOL)arg2 ;
-(id)initWithURLPath:(id)arg1 mimeType:(id)arg2 parentURLPath:(id)arg3 parentMimeType:(id)arg4 priority:(float)arg5 exclusive:(BOOL)arg6 ;
-(BOOL)exclusive;
-(void)setExclusive:(BOOL)arg1 ;
-(void)set_dependent:(id)arg1 ;
-(void)set_parent:(id)arg1 ;
@end

