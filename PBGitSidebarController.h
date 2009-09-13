//
//  PBGitSidebar.h
//  GitX
//
//  Created by Pieter de Bie on 9/8/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBViewController.h"

@class PBSourceViewAction;

@interface PBGitSidebarController : PBViewController {
	IBOutlet NSWindow *window;
	IBOutlet NSOutlineView *sourceView;

	NSMutableArray *items;

	/* Specific things */
	PBSourceViewAction *commitAction;
}

@property(readonly) NSMutableArray *items;
@end